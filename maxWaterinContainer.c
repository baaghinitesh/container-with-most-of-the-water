// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

int maxArea(int* height, int heightSize) {
    int maxArea = 0;
    int left = 0;
    int right = heightSize - 1;

    while (left < right) {
        int h = fmin(height[left], height[right]);
        int w = right - left;
        int area = h * w;
        maxArea = fmax(maxArea, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}