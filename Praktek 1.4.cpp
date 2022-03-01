/* Program perkalian 2 Matriks */
/* Praktik 1 no. 4 */
#include <iostream>
#include <conio.h>
using namespace std;
 
 // tamplate matrix
 template <int rows, int cols>
 void display(int (&array)[rows][cols])
{
	int i, j;
	cout<<"\n";
	for(i = 0; i<rows; i++) {
      for(j = 0; j<cols; j++) {
        cout<<" ";
        cout<<array[i][j];
      }
      cout<<"\n";
    }
}
	
	//declaration of matrix
  int main(void)
  {
   double a[10][10],b[10][10],c[10][10];
     int CC,i,j,k;
 
   cout<<endl<<"  Element matrix A : "<<endl;
   for (i=1; i<=2;i++){    
   for (j=1;j<=2;j++){      
   cout<<"a["<<i<<"]["<<j<<"]: ";    
   cin>>a[i][j];    
   }
   }

   cout<<endl<<"  Element matrix B : "<<endl;
   for (i=1; i<=2;i++){    
   for (j=1;j<=2;j++){        
   cout<<"b["<<i<<"]["<<j<<"]: ";    
   cin>>b[i][j];    
   }
   }
   cout<<endl;


   for (i=1;i<=2;i++){    
   for (j=1;j<=2;j++){        
   c[i][j]=0;        
   for (k=1;k<=2;k++){            
   CC=a[i][k]*b[k][j];            
   c[i][j]=c[i][j]+CC;        
   }    
   }
   }

   cout<<"  Element matrix C [result] : "<<endl;
   for (i=1;i<=2;i++){    
   for (j=1;j<=2;j++){        
   cout<<"    "<<c[i][j];    
   }  
   cout<<endl;
   }
   getch();
    }

