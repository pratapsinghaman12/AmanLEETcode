class MyCalendar {

    private TreeMap<Integer, Integer> container;

    public MyCalendar() {
        container = new TreeMap<>();
    }
    
    public boolean book(int startTime, int endTime) {
        Integer PrevStartKey = container.floorKey(startTime);
        Integer NextStartKey = container.ceilingKey(startTime);

        if((PrevStartKey == null || container.get(PrevStartKey) <= startTime) && ( NextStartKey == null || endTime <= NextStartKey)){
            container.put(startTime , endTime);
            return true;
        }
        return false;
    }
}

