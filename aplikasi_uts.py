print("=== PORSIMAKANKU ===")

nama = input("Nama makanan: ")

porsi = int(input("Jumlah porsi: "))

kalori = float(input("Kalori per porsi: "))

karbo = float(input("Karbohidrat per porsi: "))

protein = float(input("Protein per porsi: "))

lemak = float(input("Lemak per porsi: "))


# *
total_kalori = kalori * porsi
total_karbo = karbo * porsi
total_protein = protein * porsi
total_lemak = lemak * porsi

# /
rata_rata_kalori = total_kalori / porsi


# +
total_gizi = total_karbo + total_protein + total_lemak


print("\n=== HASIL DATA ===")
print("Nama makanan      :", nama)
print("Jumlah porsi      :", porsi)
print("Total kalori      :", round(total_kalori, 2), "kkal")
print("Total karbohidrat :", round(total_karbo, 2), "g")
print("Total protein     :", round(total_protein, 2), "g")
print("Total lemak       :", round(total_lemak, 2), "g")
print("Rata-rata kalori  :", round(rata_rata_kalori, 2), "kkal")
print("Total gizi        :", round(total_gizi, 2), "g")


print("\nProgram selesai.")