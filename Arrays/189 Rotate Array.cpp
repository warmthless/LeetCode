//C
void rotate(int* nums, int numsSize, int k) {
     if((numsSize==0) || ((k%=numsSize) == 0)) return;  
     int count = 0;
     int currentMove = nums[count];
     int tmp = 0;
     int checkCurrent = 0;
     for(int i = 0; i < numsSize; ++i){
         count = (count+k)%numsSize;
         tmp = nums[count];
         nums[count]=currentMove;
         currentMove = tmp;
         if(count == checkCurrent){
             ++count;
             ++checkCurrent;
             currentMove = nums[count];
         }
     }
    
}
