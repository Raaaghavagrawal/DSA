class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        n = len(image)
        for row in image:
            left, right = 0, n - 1
            while left <= right:
                if row[left] == row[right]:
                    # Flip 0 to 1 or 1 to 0 using XOR
                    row[left] ^= 1
                    # If left == right (middle element), we only flip it once
                    if left != right:
                        row[right] = row[left]
                
                # If the values are different, they remain the same 
                # after reversing and inverting, so we do nothing.
                left += 1
                right -= 1
        return image