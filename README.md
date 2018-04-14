# -Binary_Tree_Level_Order_Traversal-II

反向存储树中元素。

key:创建vector<vector<int>> res(h,vector<int> {}),存入对应深度h的对应元素vector<int>
    从树根开始存，从res[h-1]存到res[0]
    所以深度h是重要标识。
