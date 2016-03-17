int largestArea(int arr[], int len)  
{  
int area[len];  
int n, i, t;  
stack<int> St;    
bool done;  
  
for (i=0; i<len; i++)  
{  
while (!St.empty())  
{  
   if(arr[i] <= arr[St.top()])  
   {  
       St.pop();  
   }  
   else  
       break;  
}  
if(St.empty())  
   t = -1;  
else  
   t = St.top();  
  
area[i] = i - t - 1;  
St.push(i);  
}  
  
 
while (!St.empty())  
St.pop();  
  
for (i=len-1; i>=0; i--)  
{  
while (!St.empty())  
{  
   if(arr[i] <= arr[St.top()])  
   {  
       St.pop();  
   }  
   else  
       break;  
}  
if(St.empty())  
   t = len;  
else  
   t = St.top();  
 
area[i] += t - i -1;  
St.push(i);  
}  
  
int max = 0;  
 
for (i=0; i<len; i++)  
{  
area[i] = arr[i] * (area[i] + 1);  
if (area[i] > max)  
   max = area[i];  
}  
  
return max;  
}  
