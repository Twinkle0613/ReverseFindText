#include "reverseFindText.h"
#include <stdio.h>

/**
 *Find the first (partial) word in the Text from *back to *front and return the position of the first letter.
 * Eg.,
 *  text      = Hello, my name is Alladin
 * WordtoFind     = lad
 * TotalText				= 24
 * CountWord      = 4
 *  The return value is TotalText - CountWord = 20
 *
 * Input:
 *  text  contains a bunch of words
 *  word  is the (partial) word to find in the text
 * Return:
 *    The position of the first letter found in text. 
 *     If the word cannot be found in the text, -1 is returned.
 *
 */
 
 int reverseFindText (char *text, char *WordtoFind)
 {
	// printf("Hello World\n");
	 int TotalWordtoFind = 0;
	 int TotalText = 0;
	 int countInverse = 0;
	 int i = 0;
	 int j = 0;
	 
	 while( text[i] != NULL )
	 {
		i++;
		printf("[%d]",i-1);
	 }
	  printf("\n");
		while( WordtoFind[j] != NULL )
		{
			j++;
			printf("[%d]",j-1);
		}
			  printf("\n");
		j--;
		i--;
	  TotalText = i;
		TotalWordtoFind = j;
		int count;
		
	while(text[i]!= NULL) 
			{
		 	printf("[%d,%d],[%c,%c]\n",i,j,text[i],WordtoFind[j]);
			count = 0;
			
			while(text[i-count] == WordtoFind[j-count])
			{			

					//printf("[%d,%d],[%c,%c]\n",i-count,j-count,text[i-count],WordtoFind[j-count]);

				if( WordtoFind[j-count-1] == NULL)
				{
					countInverse = countInverse + count;	
					return (TotalText - countInverse);
				}
				
				count++;
					printf("[%d,%d],[%c,%c]\n",i-count,j-count,text[i-count],WordtoFind[j-count]);
			}
			
			i--;
			++countInverse;
			
			}
 		 printf("1");
		 return -1;
		 
	}
			
			
			
			
			// if(text[i]==WordtoFind[j])  //check last word
			// {	
					// if( WordtoFind[j-1] == NULL ) 
					// {
						// printf("TotalWordtoFind = %d\nTotalText = %d\ncountInverse = %d\nPosition = %d\n",TotalWordtoFind,TotalText,countInverse,TotalText - countInverse);
						// printf("00");
						// return (TotalText - countInverse);
					// }
					// if( text[i-1] == WordtoFind[j-1] )
					// {	
								// ++countInverse;
								// if( WordtoFind[j-2] == NULL )
								// {
									// printf("TotalWordtoFind = %d\nTotalText = %d\ncountInverse = %d\nPosition = %d\n",TotalWordtoFind,TotalText,countInverse,TotalText - countInverse);
									// printf("000");
									// return (TotalText - countInverse);
								// }			
								// if( text[i-2] == WordtoFind[j-2] )
								// {
									// ++countInverse;
									// printf("[%d,%d],[%c,%c]\n",i-1,j-1,text[i-1],WordtoFind[j-1]);
									// printf("TotalWordtoFind = %d\nTotalText = %d\ncountInverse = %d\nPosition = %d\n",TotalWordtoFind,TotalText,countInverse,TotalText - countInverse);
									// printf("0000");
									// return (TotalText - countInverse);
								// }
					// }
			// }
			// i--;
			// ++countInverse;
	 // }
			// printf("[%d,%d],[%c,%c]\n",i,j,text[i],WordtoFind[j]);
			// printf("TotalWordtoFind = %d\nTotalText = %d\ncountInverse = %d\nPosition = %d\n",TotalWordtoFind,TotalText,countInverse,TotalText - countInverse);
			// printf("1");
			// return -1;
 // }
 
 
 	// if(text[0]==WordtoFind[0])
	// return 0;
	 //return -1;
	 
	 						// printf("TotalWordtoFind = %d\n",TotalWordtoFind);
						// printf("TotalText = %d\n",TotalText);
						// printf("countInverse = %d\n",countInverse);
						// printf("Position = %d\n",TotalText - countInverse);