public class CharacterPattern1
{
public static void main(String args[])
  {
    for(char c='A';c<='Z';c++)
    {
        for(char d='A';d<=c;d++)
        {
        System.out.print(d+" ");
        }
        System.out.println();
    }
  }
}