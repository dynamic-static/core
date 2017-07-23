
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"

#include <array>
#include <initializer_list>
#include <vector>

namespace Dynamic_Static {

    /**
     * Provides a common interface for contiguous collections.
     * @param <T> This Collection's type
     */
    template <typename T>
    class Collection final
    {
        // FROM : vk::ArrayProxy defined in vulkan.hpp (with some modification)...
        //        https://github.com/KhronosGroup/Vulkan-Hpp/blob/master/vulkan/vulkan.hpp
        // NOTE : This type's purpose is similar to gsl::span
        //        https://github.com/Microsoft/GSL

    private:
        const T* mData { nullptr };
        size_t mCount { 0 };

    public:
        /**
         * Constructs an instance of Collection.
         */
        Collection() = default;

        /**
         * Constructs an instance of Collection.
         */
        Collection(nullptr_t)
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param [in] data This Collection's data
         */
        Collection(T& data)
            : mData { &data }
            , mCount { 1 }
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param [in] data  The address of this Collection's data
         * @param [in] count The number of elements in this Collection
         */
        Collection(T* data, size_t count)
            : mData { data }
            , mCount { count }
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param <N>       The number of elements in this Collection
         * @param [in] data This Collection's data
         */
        template <size_t N>
        Collection(std::array<typename std::remove_const<T>::type, N>& data)
            : mData { data.data() }
            , mCount { N }
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param <N>       The number of elements in this Collection
         * @param [in] data This Collection's data
         */
        template <size_t N>
        Collection(const std::array<typename std::remove_const<T>::type, N>& data)
            : mData { data.data() }
            , mCount { N }
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param [in] data This Collection's data
         */
        template <typename Allocator = std::allocator<typename std::remove_const<T>::type>>
        Collection(std::vector<typename std::remove_const<T>::type, Allocator>& data)
            : mData { data.data() }
            , mCount { data.size() }
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param [in] data This Collection's data
         */
        template <typename Allocator = std::allocator<typename std::remove_const<T>::type>>
        Collection(const std::vector<typename std::remove_const<T>::type, Allocator>& data)
            : mData { data.data() }
            , mCount { data.size() }
        {
        }

        /**
         * Constructs an instance of Collection.
         * @param [in] data This Collection's data
         */
        Collection(const std::initializer_list<T>& data)
            : mData { data.begin() }
            , mCount { static_cast<size_t>(data.end() - data.begin()) }
        {
        }

        /**
         * Gets a reference to the element at a given index.
         * @param [in] index The index of the element to get
         * @return A reference to the element at the given index
         */
        T& operator[](size_t index)
        {
            return mData[index];
        }

         /**
          * Gets a reference to the element at a given index.
          * @param [in] index The index of the element to get
          * @return A reference to the element at the given index
          */
        const T& operator[](size_t index) const
        {
            return mData[index];
        }

    public:
        /**
         * Gets a pointer to the beginning of this Collection.
         * @return A pointer to the beginning of this Collection
         */
        const T* begin() const
        {
            return mData;
        }

        /**
         * Gets a pointer to the end of this Collection.
         * @return A pointer to the end of this Collection
         */
        const T* end() const
        {
            return mData + mCount;
        }

        /**
         * Gets a reference to the first element of this Collection.
         * @return A reference to the first element of this Collection
         */
        const T& front() const
        {
            assert(mData && mCount);
            return *mData;
        }

        /**
         * Gets a reference to the last element of this Collection.
         * @return A reference to the last element of this Collection
         */
        const T& back() const
        {
            assert(mData && mCount);
            return *(end() - 1);
        }

        /**
         * Gets a value indicating whether or not this Collection is empty
         * @return Whether or not this Collection is empty
         */
        bool empty() const
        {
            return mCount == 0;
        }

        /**
         * Gets the number of elements in this Collection.
         * @return The number of elements in this Collection
         */
        size_t size() const
        {
            return mCount;
        }

        /**
         * Gets the size of this Collection in bytes.
         * @return The size of this Collection in bytes
         */
        size_t byte_size() const
        {
            return sizeof(T) * mCount;
        }

        /**
        * Gets a pointer to the underlying array serving as this Collection's storage.
        * @return A pointer to the underlying array serving as this Collection's storage
        */
        T* data() const
        {
            return mData;
        }
    };

} // namespace Dynamic_Static
