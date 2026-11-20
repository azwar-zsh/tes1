// Library untuk menampilkan teks ke console.
#include <iostream>
// Library untuk menggunakan tipe data string.
#include <string>

// Class adalah cetakan atau rancangan untuk membuat object.
class Person {
private:
    // Data private hanya dapat diakses langsung dari dalam class.
    std::string name;
    int age;

public:
    // Constructor dipanggil otomatis saat object dibuat.
    // Nilai parameter digunakan untuk mengisi data object.
    Person(const std::string& personName, int personAge)
        : name(personName), age(personAge) {}

    // Method untuk menampilkan data person.
    // const berarti method ini tidak mengubah data object.
    void introduce() const {
        std::cout << "Nama: " << name << '\n';
        std::cout << "Umur: " << age << " tahun\n";
    }
};

int main() {
    // Membuat object person dari class Person.
    // Constructor menerima nama dan umur sebagai nilai awal.
    Person person("Budi", 20);

    // Memanggil method introduce milik object person.
    person.introduce();

    // Mengembalikan nilai 0 yang menandakan program selesai dengan sukses.
    return 0;
}
