class Beverage {
    protected:
    std::string description = "Unknown Beverage";
    
    public:
    virtual std::string getDescription() {
        return description;
    }
    
    virtual double cost()= 0;    
};
