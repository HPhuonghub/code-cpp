public class Roman_to_Integer {
        public static void main(String[] args) {
                System.out.println(romanToInt("III"));
                System.out.println(romanToInt("LVIII"));
                System.out.println(romanToInt("MCMXCIV"));
        }

        public static int romanToInt(String s) {
                int number=0, pre=0, value=0;
                for(int i = s.length()-1; i >= 0; i--) {
                        switch (s.charAt(i)) {
                                case 'I':
                                        number = 1;
                                        break;
                                case 'V':
                                        number = 5;
                                        break;
                                case 'X':
                                        number = 10;
                                        break;
                                case 'L':
                                        number = 50;
                                        break;
                                case 'C':
                                        number = 100;
                                        break;
                                case 'D':
                                        number = 500;
                                        break;
                                case 'M':
                                        number = 1000;
                                        break;       
                                default:
                                        break;
                        }
                        if(number<pre) value -= number;
                        else value += number;
                        pre = number;
                }
                return value;
        }
}
