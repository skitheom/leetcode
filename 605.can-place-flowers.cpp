/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
  bool canPlaceFlowers(vector<int> &flowerbed, int n) {

    flowerbed.insert(flowerbed.begin(), 0);
    flowerbed.push_back(0);

    int countPlantedFlower = 0;

    for (auto it = flowerbed.begin() + 1; it != flowerbed.end() - 1; ++it) {
      if (*std::prev(it) == 0 && *it == 0 && *std::next(it) == 0) {
        *it = 1;
        ++countPlantedFlower;
        if (countPlantedFlower >= n) {
          return true;
        }
      }
    }
    return countPlantedFlower >= n;
  }
};
// @lc code=end
