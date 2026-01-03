class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    private node first;
    private int iCount;

    SinglyLL()
    {
        System.out.println("Inside constructor");
        first = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)   // LL is empty
        {
            first = newn;
        }
        else     // LL contains atleast one node
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node();
        temp = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)   // LL is empty
        {
            first = newn;
        }
        else     // LL contains atleast one node
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }    

            temp.next = newn;
        }
    }

}

class program373
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
    }
}