class Solution {
  List<List<int>> findDifference(List<int> nums1, List<int> nums2) {
  List<int> num1 = [];
  List<int> num2 = [];
   for(int i =0; i< nums1.length ; i++){
        bool isCommon = false;
       for(int j =0; j< nums2.length ; j++){
           if(nums1[i] == nums2[j]){
               isCommon = true;
               break;
           }
       
    } 
    if(!isCommon){
        if(!(num1.contains(nums1[i]))){

        num1.add(nums1[i]);
        }
    }
   } 
    for(int i =0; i< nums2.length ; i++){
        bool isCommon = false;
       for(int j =0; j< nums1.length ; j++){
           if(nums2[i] == nums1[j]){
               isCommon = true;
               break;
           }
       
    } 
    if(!isCommon){
        if(!(num2.contains(nums2[i]))){

        num2.add(nums2[i]);
    }
    }
   } 


   return [num1,num2];
  }
}

void main(List<String> args) {
  
}