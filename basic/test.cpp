#include<iostream>
#include<string>
#include<algorithm>
#include "linked_list_intro.cpp"

using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;

    ListNode(int x=0){
        val = x;
        next = NULL;
    }
};

void InsertNode(ListNode* &head, int val){
    ListNode* n = new ListNode(val);
    if(head==NULL){
        head = n;
        return;
    }
    ListNode* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

ListNode* sortList(ListNode* head) {
    ListNode* ans;
    ListNode* temp = head;
    vector<int> arr;
    while(temp!=NULL){
        arr.push_back(temp->val);
        temp = temp->next;
    }
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        InsertNode(ans,i);
    }
    cout<<endl;
    return ans;
}

int main(){
    ListNode* head = NULL;
}