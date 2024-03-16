#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode result(0);
        ListNode* resultHead = &result;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                resultHead->next = list1;
                list1 = list1->next;
            } else {
                resultHead->next = list2;
                list2 = list2->next;
            }
            resultHead = resultHead->next;
        }

        if (list1 != nullptr) {
            resultHead->next = list1;
        } else {
            resultHead->next = list2;
        }

        return result.next;
    }
};


ListNode* createListFromArray(const  vector<int>& arr) {
    ListNode dummy(0);
    ListNode* curr = &dummy;
    for (int val : arr) {
        curr->next = new ListNode(val);
        curr = curr->next;
    }
    return dummy.next;
}


void printList(ListNode* head) {
    while (head != nullptr) {
         cout << head->val << " ";
        head = head->next;
    }
     cout <<  endl;
}

int main() {
    Solution sol;
  vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 3, 4};
    ListNode* list1 = createListFromArray(arr1);
    ListNode* list2 = createListFromArray(arr2);

    ListNode* mergedList = sol.mergeTwoLists(list1, list2);
    printList(mergedList);


    return 0;
}