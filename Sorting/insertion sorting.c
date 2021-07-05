#include <math.h>
#include <stdio.h>

int main()
{
	long long int arr[100];
	int n;
	scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
	long long int i, key, j;
	for (i = 0; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;

		for (int k = 0; k < n; k++)
		{
		    printf("%lld ", arr[k]);
	    }printf("\n");
	}

	return 0;
}
