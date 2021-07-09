package code;

public class OO extends Object_Oriented
{
    private String dick;

    public OO()
    {
        super();
    }
    public OO(String name, String dick)
    {
        super(name);
        this.dick = dick;
    }
    
    public void setDick(String dick)
    {
        this.dick = dick;
    }

    public String getDick()
    {
        return dick;
    }

    public void sperm()
    {
        System.out.println("DA DA DA DA DA..... You are pregnant!");
    }
}
