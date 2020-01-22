public class animal {

    private String name;
    private int size;
    private int weigth;

    public animal(String name, int size, int weigth) {
        this.name = name;
        this.size = size;
        this.weigth = weigth;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setSize(int size) {
        this.size = size;
    }

    public void setWeigth(int weigth) {
        this.weigth = weigth;
    }

    public String getName() {
        return name;
    }

    public int getSize() {
        return size;
    }

    public int getWeigth() {
        return weigth;
    }
    public void eat(){
        System.out.println( name+ " eats");

    }
}
