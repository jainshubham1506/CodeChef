import java.util.*;
public class SquareRoots {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        boolean flag= false;int sqroot;
        for(int i=1;i<=n;i++){
            sqroot=sc.nextInt();
            flag=false;
            for(int j=1;j<=(sqroot/2)+1&&flag==false;j++){
                if(j*j==sqroot){
                    System.out.println(j);
                    flag=true;
                }
                if(j*j>sqroot){
                    j--;
                    System.out.println(j);
                    flag=true;

                }
            }

        }
    }

}
