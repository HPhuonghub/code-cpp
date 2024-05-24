// import java.util.*;

public class split_the_array {
        public static void main(String[] args) {
                
        }

        public static boolean isPossibleToSplit(int[] nums) {
                int[] target = new int[101];
                for(int i : nums) {
                        target[i]++;
                        if(target[i]>2) return false;
                }
                return true;
        }
//       public static void main(String[] args) {
//         int[] nums = {1,1,1,1};
//         System.out.println(isPossibleToSplit(nums));
//       }

//       public static boolean isPossibleToSplit(int[] nums) {
//         boolean check = false;
//         HashMap<Integer, Integer> hm = new HashMap<>(); 
//         if(nums.length%2==0) {
//                 for(int i=0; i<nums.length; i++) {
//                         if(!hm.containsKey(nums[i])) {
//                                 hm.put(nums[i], 1);
//                         }
//                         else {
//                                 hm.put(nums[i], hm.get(nums[i])+1); 
//                         }
//                 }
//                 for(Integer x : hm.keySet()) {
//                        System.out.println("key: " + x + " value: " + hm.get(x)); 
//                 }
//         }
//         return check;
//       }
}
