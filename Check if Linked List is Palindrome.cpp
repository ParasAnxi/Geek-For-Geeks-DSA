//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<bits/stdc++.h>

class Solution{
    private:
    Node* getMid(Node* &head){
        Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
    }
    Node* reverse(Node* &head){
        Node* prev = NULL;
    Node* next1 = NULL;
    Node* curr = head;
    while(curr!=NULL){
        next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    return prev;
    }
    bool isPalindromee(vector<int> v){
        int s = 0;
        int e = v.size()-1;
        while(s<=e){
            if(v[s]!=v[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL){
            return true;
        }
        Node* mid = getMid(head);
        Node* temp = mid->next;
        mid->next = reverse(temp);
        
        Node* head1 = head;
        Node* head2 = mid->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
            // temp = mid->next;
            // mid->next = reverse(temp);
        }
            return true;
    }
        
    //     vector<int> v;
        
    //     Node* temp = head;
    //     while(temp!=NULL){
    //         v.push_back(temp->data);
    //         temp=temp->next;
    //     }
    //     return isPalindromee(v);
    // }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends