#include <stdio.h>
int main()
{
int i, low, high, mid, num, key, ram[100];
printf("Enter number of elements\n");
scanf("%d",&num);
printf("Enter %d integers\n", num);
for(i = 0; i < num; i++)
scanf("%d",&ram[i]);
printf("Enter value to find\n");
scanf("%d", &key);
low = 0;
high = num - 1;
mid = (low+high)/2;
while (low <= high) {
if(ram[mid] < key)
low = mid + 1;
else if (ram[mid] == key) {
printf("%d found at location %d.\n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.\n", key);
return 0;
}
