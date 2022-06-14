//
// Created by Lucca Jiménez Könings on 08.06.22.
//

#ifndef XSTRING_XSTRING_H
#define XSTRING_XSTRING_H

#include <memory>
#include <string_view>

namespace x {
    template<class charT, class traits = std::char_traits<charT>,
            class Allocator = std::allocator<charT>>
    class basic_string {
    public:
        using traits_type = traits;
        using value_type = charT;
        using allocator_type = Allocator;
        using size_type = typename std::allocator_traits<Allocator>::size_type;
        using difference_type = typename std::allocator_traits<Allocator>::difference_type;
        using pointer = typename std::allocator_traits<Allocator>::difference_type;
        using const_pointer = typename std::allocator_traits<Allocator>::const_pointer;
        using reference = value_type &;
        using const_reference = const value_type &;

        //typedef iterator; // todo: add implementation defined iterator alias as per https://timsong-cpp.github.io/cppwp/n4868/container.requirements or see N4868 page 769
        //typedef const_iterator; // todo: add implementation defined iterator alias as per https://timsong-cpp.github.io/cppwp/n4868/container.requirements or see N4868 page 769

        //using reverse_iterator       = std::reverse_iterator<iterator>;
        //using const_reverse_iterator = std::reverse_iterator<const_iterator>;
        //static const size_type npos  = -1;

        constexpr basic_string() noexcept(noexcept(Allocator())) : basic_string(Allocator()) { }
        //constexpr explicit basic_string(const Allocator& a) noexcept;
        //constexpr basic_string(const basic_string& str);
        constexpr basic_string(basic_string&& str) noexcept;
        //constexpr basic_string(const basic_string& str, size_type pos,
        //                       const Allocator& a = Allocator());
        //constexpr basic_string(const basic_string& str, size_type pos, size_type n,
        //                       const Allocator& a = Allocator());
        //template<class T>
        //constexpr basic_string(const T& t, size_type pos, size_type n,
        //                       const Allocator& a = Allocator());
        //template<class T>
        //constexpr explicit basic_string(const T& t, const Allocator& a = Allocator());
        //constexpr basic_string(const charT* s, size_type n, const Allocator& a = Allocator());
        //constexpr basic_string(const charT* s, const Allocator& a = Allocator());
        //constexpr basic_string(size_type n, charT c, const Allocator& a = Allocator());
        //template<class InputIterator>
        //constexpr basic_string(InputIterator begin, InputIterator end,
        //                       const Allocator& a = Allocator());
        //constexpr basic_string(std::initializer_list<charT>, const Allocator& = Allocator());
        //constexpr basic_string(const basic_string&, const Allocator&);
        //constexpr basic_string(basic_string&&, const Allocator&);
        //constexpr ~basic_string();

        //constexpr basic_string& operator=(const basic_string& str);
        //constexpr basic_string& operator=(basic_string&& str)
        //noexcept(std::allocator_traits<Allocator>::propagate_on_container_move_assignment::value ||
        //         std::allocator_traits<Allocator>::is_always_equal::value);
        //template<class T>
        //constexpr basic_string& operator=(const T& t);
        //constexpr basic_string& operator=(const charT* s);
        //constexpr basic_string& operator=(charT c);
        //constexpr basic_string& operator=(std::initializer_list<charT>);

        // [string.iterators], iterators
        //constexpr iterator       begin() noexcept;
        //constexpr const_iterator begin() const noexcept;
        //constexpr iterator       end() noexcept;
        //constexpr const_iterator end() const noexcept;

        //constexpr reverse_iterator       rbegin() noexcept;
        //constexpr const_reverse_iterator rbegin() const noexcept;
        //constexpr reverse_iterator       rend() noexcept;
        //constexpr const_reverse_iterator rend() const noexcept;

        //constexpr const_iterator         cbegin() const noexcept;
        //constexpr const_iterator         cend() const noexcept;
        //constexpr const_reverse_iterator crbegin() const noexcept;
        //constexpr const_reverse_iterator crend() const noexcept;

        // [string.capacity], capacity
        //constexpr size_type size() const noexcept;
        //constexpr size_type length() const noexcept;
        //constexpr size_type max_size() const noexcept;
        //constexpr void resize(size_type n, charT c);
        //constexpr void resize(size_type n);
        //constexpr size_type capacity() const noexcept;
        //constexpr void reserve(size_type res_arg);
        //constexpr void shrink_to_fit();
        //constexpr void clear() noexcept;
        //[[nodiscard]] constexpr bool empty() const noexcept;

        // [string.access], element access
        //constexpr const_reference operator[](size_type pos) const;
        //constexpr reference       operator[](size_type pos);
        //constexpr const_reference at(size_type n) const;
        //constexpr reference       at(size_type n);

        //constexpr const charT& front() const;
        //constexpr charT&       front();
        //constexpr const charT& back() const;
        //constexpr charT&       back();

        // [string.modifiers], modifiers
        //constexpr basic_string& operator+=(const basic_string& str);
        //template<class T>
        //constexpr basic_string& operator+=(const T& t);
        //constexpr basic_string& operator+=(const charT* s);
        //constexpr basic_string& operator+=(charT c);
        //constexpr basic_string& operator+=(std::initializer_list<charT>);
        //constexpr basic_string& append(const basic_string& str);
        //constexpr basic_string& append(const basic_string& str, size_type pos, size_type n = npos);
        //template<class T>
        //constexpr basic_string& append(const T& t);
        //template<class T>
        //constexpr basic_string& append(const T& t, size_type pos, size_type n = npos);
        //constexpr basic_string& append(const charT* s, size_type n);
        //constexpr basic_string& append(const charT* s);
        //constexpr basic_string& append(size_type n, charT c);
        //template<class InputIterator>
        //constexpr basic_string& append(InputIterator first, InputIterator last);
        //constexpr basic_string& append(std::initializer_list<charT>);

        //constexpr void push_back(charT c);

        //constexpr basic_string& assign(const basic_string& str);
        //constexpr basic_string& assign(basic_string&& str)
        //noexcept(std::allocator_traits<Allocator>::propagate_on_container_move_assignment::value ||
        //         std::allocator_traits<Allocator>::is_always_equal::value);
        //constexpr basic_string& assign(const basic_string& str, size_type pos, size_type n = npos);
        //template<class T>
        //constexpr basic_string& assign(const T& t);
        //template<class T>
        //constexpr basic_string& assign(const T& t, size_type pos, size_type n = npos);
        //constexpr basic_string& assign(const charT* s, size_type n);
        //constexpr basic_string& assign(const charT* s);
        //constexpr basic_string& assign(size_type n, charT c);
        //template<class InputIterator>
        //constexpr basic_string& assign(InputIterator first, InputIterator last);
        //constexpr basic_string& assign(std::initializer_list<charT>);

        //constexpr basic_string& insert(size_type pos, const basic_string& str);
        //constexpr basic_string& insert(size_type pos1, const basic_string& str,
        //                               size_type pos2, size_type n = npos);
        //template<class T>
        //constexpr basic_string& insert(size_type pos, const T& t);
        //template<class T>
        //constexpr basic_string& insert(size_type pos1, const T& t,
        ////                               size_type pos2, size_type n = npos);
        //constexpr basic_string& insert(size_type pos, const charT* s, size_type n);
        //constexpr basic_string& insert(size_type pos, const charT* s);
        //constexpr basic_string& insert(size_type pos, size_type n, charT c);
        //constexpr iterator insert(const_iterator p, charT c);
        //constexpr iterator insert(const_iterator p, size_type n, charT c);
        //template<class InputIterator>
        //constexpr iterator insert(const_iterator p, InputIterator first, InputIterator last);
        //constexpr iterator insert(const_iterator p, std::initializer_list<charT>);

        //constexpr basic_string& erase(size_type pos = 0, size_type n = npos);
        //constexpr iterator erase(const_iterator p);
        //constexpr iterator erase(const_iterator first, const_iterator last);

        //constexpr void pop_back();

        //constexpr basic_string& replace(size_type pos1, size_type n1, const basic_string& str);
        //constexpr basic_string& replace(size_type pos1, size_type n1, const basic_string& str,
        //                                size_type pos2, size_type n2 = npos);
        //template<class T>
        //constexpr basic_string& replace(size_type pos1, size_type n1, const T& t);
        //template<class T>
        //constexpr basic_string& replace(size_type pos1, size_type n1, const T& t,
        //                                size_type pos2, size_type n2 = npos);
        //constexpr basic_string& replace(size_type pos, size_type n1, const charT* s, size_type n2);
        //constexpr basic_string& replace(size_type pos, size_type n1, const charT* s);
        //constexpr basic_string& replace(size_type pos, size_type n1, size_type n2, charT c);
        //constexpr basic_string& replace(const_iterator i1, const_iterator i2,
        //                                const basic_string& str);
        //template<class T>
        //constexpr basic_string& replace(const_iterator i1, const_iterator i2, const T& t);
        //constexpr basic_string& replace(const_iterator i1, const_iterator i2, const charT* s,
        //                                size_type n);
        //constexpr basic_string& replace(const_iterator i1, const_iterator i2, const charT* s);
        //constexpr basic_string& replace(const_iterator i1, const_iterator i2, size_type n, charT c);
        //template<class InputIterator>
        //constexpr basic_string& replace(const_iterator i1, const_iterator i2,
        //                                InputIterator j1, InputIterator j2);
        //constexpr basic_string& replace(const_iterator, const_iterator, initializer_list<charT>);

        //constexpr size_type copy(charT* s, size_type n, size_type pos = 0) const;

        //constexpr void swap(basic_string& str)
        //noexcept(std::allocator_traits<Allocator>::propagate_on_container_swap::value ||
        //         std::allocator_traits<Allocator>::is_always_equal::value);

        // [string.ops], string operations
        //constexpr const charT* c_str() const noexcept;
        //constexpr const charT* data() const noexcept;
        //constexpr charT* data() noexcept;
        //constexpr operator std::basic_string_view<charT, traits>() const noexcept;
        //constexpr allocator_type get_allocator() const noexcept;

        //template<class T>
        //constexpr size_type find(const T& t, size_type pos = 0) const noexcept(see below);
        //constexpr size_type find(const basic_string& str, size_type pos = 0) const noexcept;
        //constexpr size_type find(const charT* s, size_type pos, size_type n) const;
        //constexpr size_type find(const charT* s, size_type pos = 0) const;
        //constexpr size_type find(charT c, size_type pos = 0) const noexcept;
        //template<class T>
        //constexpr size_type rfind(const T& t, size_type pos = npos) const noexcept(see below);
        //constexpr size_type rfind(const basic_string& str, size_type pos = npos) const noexcept;
        //constexpr size_type rfind(const charT* s, size_type pos, size_type n) const;
        //constexpr size_type rfind(const charT* s, size_type pos = npos) const;
        //constexpr size_type rfind(charT c, size_type pos = npos) const noexcept;

        //template<class T>
        //constexpr size_type find_first_of(const T& t, size_type pos = 0) const noexcept(see below);
        //constexpr size_type find_first_of(const basic_string& str, size_type pos = 0) const noexcept;
        //constexpr size_type find_first_of(const charT* s, size_type pos, size_type n) const;
        //constexpr size_type find_first_of(const charT* s, size_type pos = 0) const;
        //constexpr size_type find_first_of(charT c, size_type pos = 0) const noexcept;
        //template<class T>
        //constexpr size_type find_last_of(const T& t,
        //                                 size_type pos = npos) const noexcept(see below);
        //constexpr size_type find_last_of(const basic_string& str,
        //                                 size_type pos = npos) const noexcept;
        //constexpr size_type find_last_of(const charT* s, size_type pos, size_type n) const;
        //constexpr size_type find_last_of(const charT* s, size_type pos = npos) const;
        //constexpr size_type find_last_of(charT c, size_type pos = npos) const noexcept;

        //template<class T>
        //constexpr size_type find_first_not_of(const T& t,
        //                                      size_type pos = 0) const noexcept(see below);
        //constexpr size_type find_first_not_of(const basic_string& str,
        //                                      size_type pos = 0) const noexcept;
        //constexpr size_type find_first_not_of(const charT* s, size_type pos, size_type n) const;
        //constexpr size_type find_first_not_of(const charT* s, size_type pos = 0) const;
        //constexpr size_type find_first_not_of(charT c, size_type pos = 0) const noexcept;
        //template<class T>
        //constexpr size_type find_last_not_of(const T& t,
                                             //size_type pos = npos) const noexcept(see below);
        //constexpr size_type find_last_not_of(const basic_string& str,
                                             //(size_type pos = npos) const noexcept;
        //constexpr size_type find_last_not_of(const charT* s, size_type pos, size_type n) const;
        //constexpr size_type find_last_not_of(const charT* s, size_type pos = npos) const;
        //constexpr size_type find_last_not_of(charT c, size_type pos = npos) const noexcept;

        //constexpr basic_string substr(size_type pos = 0, size_type n = npos) const;

        //template<class T>
        //constexpr int compare(const T& t) const noexcept(see below);
        //template<class T>
        //constexpr int compare(size_type pos1, size_type n1, const T& t) const;
        //template<class T>
        //constexpr int compare(size_type pos1, size_type n1, const T& t,
        //                      size_type pos2, size_type n2 = npos) const;
        //constexpr int compare(const basic_string& str) const noexcept;
        //constexpr int compare(size_type pos1, size_type n1, const basic_string& str) const;
        //constexpr int compare(size_type pos1, size_type n1, const basic_string& str,
        //                      size_type pos2, size_type n2 = npos) const;
        //constexpr int compare(const charT* s) const;
        //constexpr int compare(size_type pos1, size_type n1, const charT* s) const;
        //constexpr int compare(size_type pos1, size_type n1, const charT* s, size_type n2) const;

        //constexpr bool starts_with(std::basic_string_view<charT, traits> x) const noexcept;
        //constexpr bool starts_with(charT x) const noexcept;
        //constexpr bool starts_with(const charT* x) const;
        //constexpr bool ends_with(std::basic_string_view<charT, traits> x) const noexcept;
        //constexpr bool ends_with(charT x) const noexcept;
        //constexpr bool ends_with(const charT* x) const;
    };

    template<class charT, class traits,
            class Allocator> constexpr basic_string<charT, traits, Allocator>::basic_string(basic_string&& str) noexcept{

            }


    /*
    template<class InputIterator,
            class Allocator = std::allocator<typename std::iterator_traits<InputIterator>::value_type>>
    basic_string(InputIterator, InputIterator, Allocator = Allocator())
    -> basic_string<typename std::iterator_traits<InputIterator>::value_type,
            std::char_traits<typename std::iterator_traits<InputIterator>::value_type>,
    Allocator>;

    template<class charT,
            class traits,
            class Allocator = std::allocator<charT>>
    explicit basic_string(std::basic_string_view<charT, traits>, const Allocator& = Allocator())
    -> basic_string<charT, traits, Allocator>;

    template<class charT,
            class traits,
            class Allocator = std::allocator<charT>>
    basic_string(std::basic_string_view<charT, traits>,
                 typename see below::size_type, typename see below::size_type,
                 const Allocator& = Allocator())
    -> basic_string<charT, traits, Allocator>;
     */
}



#endif //XSTRING_XSTRING_H
