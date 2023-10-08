class Bfs {
    public static void main(String[] args) {
        
    }
    
    public static ArrayList<Integer> bfs(ArrayList<ArrayList<Integer>> adj, int V) {

        Queue<Integer> q = new LinkedList<>();
        boolean[] visited = new boolean[V];

        ArrayList<Integer> ans = new ArrayList<>();

        q.add(0);
        visited[0] = true;

        // to store the answer
        while (!q.isEmpty()) {
            int curr = q.peek();
            q.remove();
            ans.add(curr);
            for (Integer it : adj.get(curr)) {
                if (visited[it] == false) {
                    visited[it] = true;
                    q.add(it);
                }
            }
        }
        return ans;
    }
}