public class dog extends animal {
    private int tail;
    private int eyes;


    public dog(String name, int size, int weigth,int tail,int eyes) {
        super(name, size, weigth);
        this.eyes=eyes;
        this.tail=tail;
    }

    @Override
    public void eat() {
        super.eat();
        System.out.println( getName() + " said taste very good");
    }
}
