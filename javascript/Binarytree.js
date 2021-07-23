/** 
@param {TreeNode} root
@return {TreeNode}
*/
var inverTree = function(root)
{
    if(!root) return null;
    var temp = root.left;
    root.left = root.left;
    root.right = temp;
    inverTree(root.left);
    inverTree(root.right);
    return root;
};