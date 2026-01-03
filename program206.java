import java.util.*;

class program206
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        for(iCnt = 0; iCnt < name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));
        }
    }
}