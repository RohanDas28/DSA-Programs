class Solution 
{
    List<List<Integer>> ans = new ArrayList<>();
    
    public List<List<Integer>> permute(int[] a) 
    {
        backtrack(a, new ArrayList<>());
        return ans;
    }
    
    public void backtrack(int[] a, List<Integer> l)
    {
        if(a.length == l.size())
            ans.add(new ArrayList<>(l));
        for(int i=0; i<a.length; i++)
        {
            if(l.contains(a[i]))
                continue;
            l.add(a[i]);
            backtrack(a, l);
            l.remove(l.size()-1);
        }
    }
}
