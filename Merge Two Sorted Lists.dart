class ListNode {
  int val;
  ListNode? next;
  ListNode([this.val = 0, this.next]);
}

class Solution {
  ListNode? mergeTwoLists(ListNode? list1, ListNode? list2) {
  ListNode? head1 = list1;
    ListNode? head2 = list2;
    ListNode result = ListNode();
     ListNode resultHead = result;
    while(head1 != null && head2 != null){
      var val1 = head1.val;
     var val2 = head2.val;
      if (val1 <= val2) {
        resultHead.next = head1;
        head1 = head1.next;
      } else if (val1 >= val2) {
        resultHead.next = head2;
        head2 = head2.next;
      }
      resultHead = resultHead.next!;
    }
    if(head1 != null){
        resultHead.next = head1;
    }else{
        resultHead.next = head2;
    }

  return result.next;
  }
}

void main(List<String> args) {
  ListNode temp1 = ListNode(1, ListNode(2, ListNode(4, null)));
  ListNode temp2 = ListNode(1, ListNode(3, ListNode(4, null)));
  Solution().mergeTwoLists(temp1, temp2);
}
