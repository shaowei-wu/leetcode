1. sum two

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 103
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

##Hash Table
1. 先找max,min
2. 建array大小max-min-1,初始化成0, offset=min(偏移量基準)
:::info
有offset方便存取值 e.g. -25不能找arr[-25] ,但是可以找arr[-25-offset] (offset=min 故-25-offset會變正值)
:::
3. 再掃一次填表 若值x,就把他在nums的index填入arr[x-offset]這格
:::info
index=0額外記錄成-1,因為calloc初始化陣列全部值都=0,不設-1看不出0是初始化的0還是index的0
:::
4. 開始找值,首先讀數值a,去HT內找target-a這個值,也就是直接存取 arr[target-a-offset] 這格看index多少
5. 找到值就放進ret[0],ret[1],且值不能相同,回傳ret之前記得釋放HT的記憶體空間,最後回傳ret。