#include <stdio.h>
#include <string.h>
int     main()
{
    int     N, bestseller, bestseller_index, k;
    char    str[1000][51];
    int     sell[1000];
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%s", str[i]);
    for (int i = 0; i < N; i++) {
        sell[i] = 0;
        for (int j = 0; j < N; j++)
            if (strcmp(str[i], str[j]) == 0)
                sell[i]++;
    }
    bestseller = 0;
    for (k = 0; k < N; k++) {
        if (bestseller < sell[k] || 
				(sell[k] == bestseller && 
				  (strcmp(str[k], str[bestseller_index]) < 0)))
		{
			bestseller = sell[k];
			bestseller_index = k;
		}
	}
    printf("%s\n", str[bestseller_index]);
}
