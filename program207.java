import java.util.*;

class program207
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        System.out.println(Arr);

        System.out.println(Arr.length);
    }
}