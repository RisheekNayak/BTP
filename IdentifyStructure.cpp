# include <bits/stdc++.h>

using namespace std;

unordered_set<string> model_list;

void all_models()
{
    string path = "models.txt";
    fstream file_handler (path.c_str());

    string line;
    while (getline(file_handler, line))
        model_list.insert(line);  

    file_handler.close();  
}

string find_model(string file_name)
{
    fstream file_handler (file_name.c_str());
    string line, model;

    while (getline(file_handler, line))
    {
        stringstream sentence(line);
        string word;
        bool found = false;

        while (sentence >> word)
        {
            string prefix;
            for (int i = 0; i < min(14, (int)word.size()); i++)
                prefix += word[i];
            
            if (prefix == "torch.hub.load")
            {
                found = true;
                continue;
            }
            if (found)
            {
                bool start = false;
                for (int i = 0; i < (int)word.size(); i++)
                {
                    if (word[i] == '\'')
                    {
                        if (start)
                            return model;
                        else
                        {
                            start = true;
                            continue;
                        }
                    }
                    if (start)
                        model += word[i];
                }
            }
        }
    }

    file_handler.close();

    return "NotFound";
}

void manual(string file_name)
{
    fstream file_handler (file_name.c_str());
    string line, model;

    while (getline(file_handler, line))
    {
        
    }
}

int main() 
{
    all_models();
    
    string file_name = "resnet50.py";
    string model = find_model(file_name);

    cout << model;

    return 0;
}