

class Solution {
        public static void main(String[] args) {
                int[] x = {2,7,11,15};
                int[] y = twoSum(x, 9);
                String s = "[";
                for(int i=0;i<y.length;i++){
                        s += String.valueOf(y[i]);
                }
                s += ']';
                System.out.println(s);
        }

        public static int[] twoSum(int[] nums, int target) {

                int[] x = {0,0};
            int l = nums.length;
            for(int i=0;i<l-1;i++) {
                for(int j=i+1;j<l;j++) {
                    if(nums[i]+nums[j]==target) {
                        x[0]=i;
                        x[1]=j;
                    }
                }
            }
            return x;
        }
    }