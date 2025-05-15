from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}
        for index, num in enumerate(nums):
            complement = target - num
            # print(f"Index: {index}, Num: {num}, Complement: {complement}, Num Map: {num_map}")

            if complement in num_map:
                # print(f"Found: {num} + {complement} = {target}")
                # print(f"Indices: {num_map[complement]}, {index}")
                return [num_map[complement], index]
            num_map[num] = index
            # print(num_map[num])
        return []

# Example - you can change these numbers!
numbers = [2, 7, 11, 15]
target_value = 22

solver = Solution()
result = solver.twoSum(numbers, target_value)
print(f"The indices are: {result}")