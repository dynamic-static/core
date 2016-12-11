
/*
=====================================================================================

    The MIT License(MIT)

    Copyright(c) 2016 to this->moment()->next() Dynamic_Static

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files(the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions :

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.

=====================================================================================
*/

#pragma once

#include <cassert>

namespace Dynamic_Static {
    /**
     * Abstract class that holds a handle to a specified dependency type.
     */
    template <typename T>
    class DependsOn {
    private:
        const T* m_dependency { nullptr };

    public:
        /**
         * Constructs an instance of DependsOn.
         */
        DependsOn() = default;

        /**
         * Constructs an instance of DependsOn with a specified dependee.
         * @param [in] dependee The dependee to construct this DependsOn with
         */
        DependsOn(const T& dependency)
            : DependsOn(&dependency)
        {
        }

        /**
         * Constructs an instance of DependsOn with a specified dependee.
         * @param [in] dependee The dependee to construct this DependsOn with
         */
        DependsOn(const T* dependency)
            : m_dependency { dependency }
        {
        }

        /**
         * Destroys this instance of DependsOn.
         */
        virtual ~DependsOn() = 0;

    protected:
        /**
         * Gets this DependsOn's dependency.
         * @return This DependsOn's dependency
         */
        const T& dependency() const
        {
            assert(m_dependency != nullptr && "Dependency cannot be null");
            return *m_dependency;
        }
    };

    template <typename T>
    DependsOn<T>::~DependsOn()
    {
    }
}