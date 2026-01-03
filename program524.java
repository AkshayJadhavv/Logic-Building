// Demo hello pune demo  code hello ppa lb
/*

         HashMap
    ----------------------
    key           Value
    ----------------------
    demo          2
    helllo        3
    pune          1
    code          1
    india         1
    ppa           1
    lb            1

    Accept String
    Remove extra whitespaces using trim
    remove in between white spaces using replaceAll
    Tokenize the string using split
    Create hashmap with string as key and int as value
    Travel Tokens array and update hashmap
    Travel hashmap and Display result
*/

import java.util.*;

class program524
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String tokens[] = str.split(" ");

        HashMap <String, Integer>hobj = new HashMap<String, Integer>();

        for(String s : tokens)
        {
            if(hobj.containsKey(s))
            {
                hobj.put(s,hobj.get(s)+1);
            }
            else
            {
                hobj.put(s,1);
            }
        }

        for(String s : hobj.keySet())
        {
            System.out.println(s+" : "+hobj.get(s));
        }
       
    }
}