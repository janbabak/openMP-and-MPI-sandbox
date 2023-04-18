#include <mpi.h>
#include <omp.h>
#include <iostream>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    MPI_Init(&argc, &argv);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);

    // Print off a hello world message
    printf("Hello world from processor %s, rank %d out of %d processors\n", processor_name,
           world_rank, world_size);

    int nthreads, tid;
    omp_set_num_threads(3);

    //openMP thread parallel code
#pragma omp parallel private(nthreads, tid)
    {
        tid = omp_get_thread_num();
        printf("Welcome from thread = %d of process %d\n", tid, world_rank);

        // Only master thread does this
        if (tid == 0) {
            nthreads = omp_get_num_threads();
            printf("Number of threads = %d on process %d\n", nthreads, world_rank);
        }
    }

    // Finalize the MPI environment.
    MPI_Finalize();
}