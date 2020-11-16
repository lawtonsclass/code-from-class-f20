public class MoreJava {

    public static void main(String[] args) {
        int x = 42;
        double y = 3.14;
        boolean b = true;
        String s = "hi mom";

        // arrays must all be made on the heap
        // the [] go after the type
        // all arrays know their length in Java (arr.length)
        int[] arr = new int[]{1, 2, 3};

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }

        // no delete is necessary!!! Java takes care of that for us.
        // It notices that we're done using some heap memory and "garbage collects" it away
    }
}