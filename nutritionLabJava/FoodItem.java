/**
 * Represents a food item with nutritional information (fat, carbs, protein).
 * Provides methods to calculate calories and print info.
 */
public class FoodItem {
    // Name of the food
    private String name;
    // Amounts per serving
    private double fat;
    private double carbs;
    private double protein;

    /**
     * Default constructor.
     * Initializes the item as Water with zero fat, carbs, and protein.
     */
    public FoodItem() {
        this.name    = "Water";
        this.fat     = 0.0;
        this.carbs   = 0.0;
        this.protein = 0.0;
    }

    /**
     * Parameterized constructor.
     * @param name      Name of the food item
     * @param fat       Grams of fat per serving
     * @param carbs     Grams of carbohydrates per serving
     * @param protein   Grams of protein per serving
     */
    public FoodItem(String name, double fat, double carbs, double protein) {
        this.name    = name;
        this.fat     = fat;
        this.carbs   = carbs;
        this.protein = protein;
    }

    /**
     * Calculates calories for a given number of servings.
     * Formula: (fat * 9 + carbs * 4 + protein * 4) * numServings
     * @param numServings Number of servings
     * @return Total calories
     */
    public double getCalories(double numServings) {
        return ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
    }

    /**
     * Prints the nutritional information per serving to the console.
     */
    public void printInfo() {
        System.out.printf("Nutritional information per serving of %s:%n", name);
        System.out.printf("  Fat: %.2f g%n", fat);
        System.out.printf("  Carbohydrates: %.2f g%n", carbs);
        System.out.printf("  Protein: %.2f g%n", protein);
    }
}