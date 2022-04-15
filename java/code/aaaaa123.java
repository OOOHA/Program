package code;
import java.util.*;

public class aaaaa123 {
    public static void main(String[] args) {
        int start_vertex = 0;
        int[] d = { 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999 };
        int[] pre = { -1, -1, -1, -1, -1, -1, -1, -1 };
        int[] S = { -1, -1, -1, -1, -1, -1, -1, -1 };
        int[] Q = { 0, 0, 0, 0, 0, 0, 0, 0 };
        int graph[][] = new int[][] {
                { 0, 0, 0, 0, 0, 0, 0, 0 }, { 300, 0, 0, 0, 0, 0, 0, 0 }, { 1000, 800, 0, 0, 0, 0, 0, 0 },
                { 0, 0, 1200, 0, 0, 0, 0, 0 }, { 0, 0, 0, 1500, 0, 250, 0, 0 }, { 0, 0, 0, 1000, 0, 0, 900, 1400 },
                { 0, 0, 0, 0, 0, 0, 0, 1000 }, { 1700, 0, 0, 0, 0, 0, 0, 0 }, };

        Scanner sc = new Scanner(System.in);

        System.out.print("Please enter start vertex : ");
        start_vertex = sc.nextInt();
        d[start_vertex] = 0;
        pre[start_vertex] = 0;
        S[0] = start_vertex;
        Q[start_vertex] = -1;

        add(start_vertex, graph, d, pre, S, Q);
    }

    public static void add(int v, int[][] graph, int[] d, int[] pre, int[] S, int[] Q) {
        for (int i = 0; i < graph.length; i++) {
            int min = 9999;
            for (int j = 0; j < graph.length; j++) {
                if (graph[v][j] != 0) {
                    pre[j] = v;
                    if (d[j] > d[v] + graph[v][j]) {
                        d[j] = d[v] + graph[v][j];
                    }
                }
            }
            for (int p = 0; p < graph.length; p++) {
                if (Q[p] != -1) {
                    if (d[p] < min) {
                        min = d[p];
                        S[i + 1] = p;
                    }
                }
            }
            v = S[i + 1];
            Q[S[i + 1]] = -1;
            System.out.print("d[] = ");
            for (int j = 0; j < graph.length; j++) {
                System.out.print(d[j] + " ");
            }
            System.out.println();
            System.out.print("Pre[] = ");
            for (int j = 0; j < graph.length; j++) {
                System.out.print(pre[j] + " ");
            }
            System.out.println();
            System.out.print("S[] = ");
            for (int j = 0; j < graph.length; j++) {
                if (S[j] == -1) {
                    break;
                }
                System.out.print(S[j] + " ");
            }
            System.out.println();
        }

    }

}