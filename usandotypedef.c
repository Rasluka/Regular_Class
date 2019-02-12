#include <stdio.h>




main()
{
	typedef int vectorde10[10];
    vectorde10 num={55, 24, 34, 26, 46, 62, 45, 24, 31, 61};
    int i;
    
    for(i=0; i<10; i++)
    {
    	printf("La persona numero %d tiene %d anios\n", i+1, num[i]);
	}
    

	return 0;
}
