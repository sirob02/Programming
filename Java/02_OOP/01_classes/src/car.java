public class car {


    public car(int doors, int wheels, String model, String color) {
        this.doors = doors;
        this.wheels = wheels;
        this.model = model;
        this.color = color;
    }

    private int doors;
    private int wheels;
    private String model;
    private String color;

    public   void drive(){

        System.out.println("Car " + this.model+ " is driving 20 km/h");

    }

    public void start(){

        System.out.println("Car " + this.model+ " is starting");

    }
    public void stop(){

        System.out.println("Car " + this.model+ " stops");
    }

}
