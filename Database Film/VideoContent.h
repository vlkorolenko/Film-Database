#pragma once
class VideoContent
{
public:
    virtual void play() const = 0; // Чисто віртуальна функція
    virtual void stop() const = 0; // Чисто віртуальна функція
};

