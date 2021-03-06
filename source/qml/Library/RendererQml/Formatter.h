#pragma once

#include <string>
#include <sstream>

namespace RendererQml
{

    class Formatter
    {
    public:
        Formatter();

        template <typename Type>
        Formatter& operator<<(const Type& value)
        {
            m_stream << value;
            return *this;
        }

        std::string Str() const;

        operator std::string() const;

        enum class ConvertToString
        {
            to_str
        };

        std::string operator>>(ConvertToString);

    private:
        std::stringstream m_stream;

        Formatter(const Formatter&);
    };

}
