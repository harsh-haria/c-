#include<iostream>
#include<vector>
using namespace std;

class heap{
    public:
        vector<int> arr;
        void insertHeap(int x){
            arr.push_back(x);
        }

        void displayHeap(){
            for(auto i:arr){
                cout<<i<<" ";
            }
            cout<<endl;
        }

        void giveSize(){
            cout<<arr.size()<<endl;
        }

        void maxHeapify(vector<int> arr,int i){
            int l,r,largest;
            l = 2*i;
            r = 2*i + 1;
            if(l<=arr.size() and arr[l-1]>arr[i-1]){
                largest = l;
            }
            else{
                largest = i;
            }
            if(r<=arr.size() and arr[r-1]>arr[largest -1]){
                largest = r;
            }
            if(largest!=i){
                cout<<"Largest1: "<<arr[largest-1]<<" "<<"arr[i-1]: "<<arr[i-1]<<endl;
                // swap(arr[largest-1], arr[i-1]);
                int x = arr[largest-1];
                int y = arr[i-1];
                arr[i-1] = x;
                arr[largest-1] = y;
                cout<<"Largest2: "<<arr[largest-1]<<" "<<"arr[i-1]: "<<arr[i-1]<<endl;
                maxHeapify(arr,largest);
            }
        }

        void buildMaxHeap(vector<int> arr){
            for(int i = arr.size()/2;i>=1;i--){
                cout<<"i: "<<i<<endl;
                maxHeapify(arr,i);
                displayHeap();
                
            }
        }
};

int main(){
    heap x;
    x.insertHeap(1);
    x.insertHeap(5);
    x.insertHeap(6);
    x.insertHeap(8);
    x.insertHeap(12);
    x.insertHeap(14);
    x.insertHeap(16);
    x.displayHeap();
    x.buildMaxHeap(x.arr);
    x.displayHeap();

}