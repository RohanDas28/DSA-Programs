class Insertionsort{
public static void main(String args[]){

int[] a = {34,23,32,16,1,20,36,100,39,101,302};
for(int i=1;i<a.length;i++){
int temp = a[i];
int j=i;
while(j>0 && a[j-1]>temp){
  a[j]=a[j-1];
  j=j-1;
}
a[j]=temp;


}

//this code is to print the sorted array elements.
for(int i=0;i<a.length;i++){
System.out.println(a[i]);
}



}
}