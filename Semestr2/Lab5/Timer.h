#pragma once
#include <vector>
#include <string>

class Timer{

    public:

        
        Timer(int time = 0, std::string name = "None", std::string screen = "None"): m_time(time), m_name(name), m_screen(screen){}
        virtual void setName(std::string name) = 0;
        virtual std::string getName() {return m_name; }
        virtual int getTime() const {return m_time; } 

        virtual void setTime(int time){

            m_time = time;
        }


    protected:
        int m_time;
        std::string m_name;
        std::string m_screen;
};

class TimerSerwer: public Timer{
    
    public:

        TimerSerwer(){}
        void Attached(Timer * timer){

            m_attachedTimers.push_back(timer);

        }

        void Reset() {
            for (Timer * timer: m_attachedTimers)
                timer->setTime(0);
        }

        void Synchronize(){
            for (Timer * timer: m_attachedTimers)
                timer->setTime(m_time);
        }


        void Detach(Timer *timer){
        }

        virtual void setName(std::string name) {m_name = name; }        
    private:

        std::vector<Timer*> m_attachedTimers;
    


};



class TimerDigital : public Timer{

    public:

        TimerDigital(int time, std::string screen = "wyswietlacz kolorowy"): Timer(time, "TimerDigital", screen){}

    private:


};



class TimerAnalog : public Timer{

    public:

        TimerAnalog (int time, std::string screen = "tarcza analogowa"): Timer(time, "TimerAnalog", screen){}

    private:

   
};