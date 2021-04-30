package Code;

public class OO extends Object_Oriented
{
    private String crest;

    public OO()
    {
        super();
    }

    public OO(String name, String crest)
    {
        super(name);
        this.crest = crest;
    }
    
    public void setCrest(String crest)
    {
        this.crest = crest;
    }

    public String getCrest()
    {
        return crest;
    }

    public void wu()
    {
        System.out.println("Co CO Co.....");
    }
}
