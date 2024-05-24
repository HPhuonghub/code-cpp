public class Palindrome_number {
        public static void main(String[] args) {
                int x = 10;
                System.out.println(x);
                System.out.println("check result: " + isPalindrome_Number(x));
        }

        public static boolean isPalindrome_Number(int x) {
                StringBuilder s = new StringBuilder(String.valueOf(x));
                StringBuilder s1 = new StringBuilder(s).reverse(); // Create a new StringBuilder for the reversed string
                return s.toString().equals(s1.toString());
        }
}
