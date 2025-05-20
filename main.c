#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    char arr[100];
    char ett=0;
    char tva=0; 
    char tre=0;
    char fyra=0;
    char fem=0;
    char sex=0;
    int sum=0;    
    for(char i=0; i<100; ++i)
    {
	    arr[i]=(rand() % 6)+1;
        switch(arr[i])
	    {
        
	        case 1:
	            ++ett;
	            break;
	    
            case 2:
	            ++tva;
	            break;
	    
            case 3:
	            ++tre;
	            break;
	    
	        case 4:
	            ++fyra;
	            break;

	        case 5:
	            ++fem;
	            break;

	        case 6:
	            ++sex;
	            break;
	      
	    }
    }
    sum=ett+tva*2+tre*3+fyra*4+fem*5+sex*6;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%.1f\n",ett,tva,tre,fyra,fem,sex,sum,(float)sum/100);
    
    return 0;
}
