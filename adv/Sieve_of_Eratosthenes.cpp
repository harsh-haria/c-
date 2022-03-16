//find prime numbers till the given number. lets say till 50.
//start from 2. mark all elements divisible by 2 starting from its square i.e. 4. 
//now 3. mark all elements divisible by 3 starting from its square i.e. 9. 
//now 4. 4 was marked as it is divisible by 2. so leave it. if the element is marked then leave and move to next element
//now 5. mark all elements divisible by 5 starting from its square i.e. 25. 
//now 6. it was already marked by 2.
//now 7. mark all elements divisible by 7 starting from 49.
//now 8. 8^2 is 64 which is bigger than 50 so we stop.
//all the unmarked elements are prime numbers.
#include<iostream>
using namespace std;

void do_it(int *a,bool *b,int n){
    for(int i=2;i<=n;i++){
        if(i*i>n){
            break;
        }
        if(b[i]==1){
            continue;
        }
        else{
            int x = i*i;
            while(x<=n){
                if((a[(x++)]%i)==0){
                    b[x-1]=1;
                }
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int prime1[n+1]={0};
    bool prime2[n+1]={0};
    
    for(int i=0;i<=n;i++){
        prime1[i]=i;
    }
    
    do_it(prime1,prime2,n);

    for(int i=2;i<=n;i++){
        if(prime2[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}